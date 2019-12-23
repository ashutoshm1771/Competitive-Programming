#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};
typedef struct word word_t;
typedef struct sentence sentence_t;
typedef struct paragraph paragraph_t;
typedef struct document document_t;

/* Create a new Document structure in the heap and return a pointer to it.*/
document_t* new_document()
{
    // Allocate space in the heap for the Document
    // structure and return a pointer to it.
    document_t* Doc = calloc(1, sizeof(document_t));
    
    // Check memory allocation.
    if(!Doc) exit(EXIT_FAILURE);

    // Initialize Document members.
    // Doc->data will be a pointer to an array of Paragraph structures
    Doc->data = NULL; // We do not have a pointer yet. Make it NULL.
    Doc->paragraph_count = 0; // We do not have any Paragraphs yet.

    // Return the pointer to the Document structure.
    return Doc;
}

/* Add a Paragraph structure to the array pointed to by the Document.*/
void doc_add_paragraph(document_t* Doc)
{
    // Add 1 to the number of Paragraphs created so far.
    ++Doc->paragraph_count;

    // Increase the size of the memory block pointed by
    // Doc->data, so we have enough space for the new
    // Paragraph structure created.
    size_t size = Doc->paragraph_count;

    Doc->data = realloc(
        Doc->data, size * sizeof(paragraph_t)
    );

    // Check memory allocation
    if (!Doc->data) exit(EXIT_FAILURE);

    // Discover the current Paragraph index.
    // It will always be 1 less than total, because
    // the first index in the array is 0.
    int par_idx = Doc->paragraph_count - 1;

    // Initialize Paragraph structure members
    Doc->data[par_idx].data = NULL; // No array of Sentence strcutures yet.
    Doc->data[par_idx].sentence_count = 0; // No Sentences structures yet.
}

/* Add a Sentence structure to the array pointed
 to by the last Paragraph in the Document. */
void doc_add_sentence(document_t* Doc)
{
    // Find out the index of the last Paragraph structure added.
    int par_idx = Doc->paragraph_count - 1;

    // Add 1 to the number of Sentence structures created so far.
    ++Doc->data[par_idx].sentence_count;

    // Increase the size of the memory block pointed by
    // the last Paragraph data member, so we have enough space
    // for the new Sentence structure created.    
    size_t size = Doc->data[par_idx].sentence_count;

    Doc->data[par_idx].data = realloc(
        Doc->data[par_idx].data, size * sizeof(sentence_t)
    );

    // Check memory allocation
    if (!Doc->data[par_idx].data) exit(EXIT_FAILURE);

    // Discover the current Sentence index.
    // It will always be 1 less than total, because
    // the first index in the array is 0.
    int sen_idx = Doc->data[par_idx].sentence_count - 1;
    
    // Initialize Sentence structure members
    Doc->data[par_idx].data[sen_idx].data = NULL; // No array of Word strucures yet.
    Doc->data[par_idx].data[sen_idx].word_count = 0; // No Word structures yet.
}

/* Add a Word structure to the array pointed to by the last
Sentence in the last Paragraph in the Document. */
void doc_add_word(document_t* Doc)
{
    // Find out the index of the last Sentence structure added.
    int par_idx = Doc->paragraph_count - 1;
    int sen_idx = Doc->data[par_idx].sentence_count - 1;

    // Add 1 to the number of Word structures created so far.
    ++Doc->data[par_idx].data[sen_idx].word_count;

    // Increase the size of the memory block pointed by
    // the last Sentence data member, so we have enough space
    // for the new Word structure created.    
    size_t size = Doc->data[par_idx].data[sen_idx].word_count;

    Doc->data[par_idx].data[sen_idx].data = realloc(
        Doc->data[par_idx].data[sen_idx].data,
        size * sizeof(word_t)
    );

    // Check memory allocation
    if (!Doc->data[par_idx].data[sen_idx].data) exit(EXIT_FAILURE);

    // Initialize Word structure members
    int wor_idx = Doc->data[par_idx].data[sen_idx].word_count - 1;
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data = NULL;
}

/* Add a character to the array pointed to by the last
Word in the last Sentence in the last Paragraph in the Document. */
void doc_add_char(document_t* Doc, char c)
{
    // Find out last Word index.
    int par_idx = Doc->paragraph_count - 1;
    int sen_idx = Doc->data[par_idx].sentence_count - 1;
    int wor_idx = Doc->data[par_idx].data[sen_idx].word_count - 1;

    // If the "string" (array of chars) does not exist yet,
    // initialize length and index to 0.
    size_t len = 0;
    if (Doc->data[par_idx].data[sen_idx].data[wor_idx].data != NULL) {
        len = strlen(Doc->data[par_idx].data[sen_idx].data[wor_idx].data);
    }

    // Increase the size of the the memory block pointed by the
    // array of chars ("string"), so we have space for a new character and
    // fot the null terminator
    size_t size = len + 2;
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data = realloc(
        Doc->data[par_idx].data[sen_idx].data[wor_idx].data,
        size * sizeof(char)
    );

    // Check memory allocation
    if (!Doc->data[par_idx].data[sen_idx].data[wor_idx].data) exit(EXIT_FAILURE);

    // The current char index is 2 less than the size,
    //  because we added space for a char and for the null terminator
    int char_idx = size - 2;

    // Add the character
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data[char_idx] = c;

    // Add the null terminator in the char array
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data[char_idx + 1] = '\0';
}

/* Create a Document structure, populate it with the text and
return a copy of the Documen structure created.*/
struct document get_document(char* text)
{  
    // Create the Document structure and get a pointer to it
    document_t* Doc = new_document();

    // Add the first Paragraph, first Sentence and first Word
    doc_add_paragraph(Doc);
    doc_add_sentence(Doc);
    doc_add_word(Doc);

    // Discover the length of the text so we can iterate each char
    size_t text_len = strlen(text);

    for (int char_idx = 0; char_idx < text_len; ++char_idx) {
        switch (text[char_idx])
        {
            // Add a Word if the current char is a blank space.
            case ' ':
                doc_add_word(Doc);
                break;

            // Add a Sentence and a Word if the current char is a point '.'.
            case '.':
                // Only do it if this isn't the last sentence
                // nor the end of the string.
                if (text[char_idx + 1] != '\n' &&
                    text[char_idx + 1] != '\0') {
                    doc_add_sentence(Doc);
                    doc_add_word(Doc);
                }
                break;

            // Add a Paragraph, a Sentence and a Word
            //  if the current char is a new line '\n'.
            case '\n':
                doc_add_paragraph(Doc);
                doc_add_sentence(Doc);
                doc_add_word(Doc);
                break;

            // Do nothing if this is the end of a string.
            case '\0':
                break;

            // If the current char is none of the above,
            // then it should be added to the current Word
            default:
                doc_add_char(Doc, text[char_idx]);
                break;
        }
    }

    // Returning the actual structure may not be efficient, depending
    // on the structure size. I guess the problem designer was ok with
    // this approach because the Document structure in the test cases
    // are small
    return *Doc;
}


struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    // Make sure you are extra careful with the parameter variable names,
    // because they are not consistent across functions.
    // Here k is the position of the word, not the paragraph or
    // sentence, like the two functions below.
    return Doc.data[n - 1].data[m - 1].data[k - 1];
}


struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
    return Doc.data[m - 1].data[k- 1];
}


struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k - 1];
}

void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main() 
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }     
}
