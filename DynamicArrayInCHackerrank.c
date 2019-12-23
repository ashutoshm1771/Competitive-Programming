#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books = (int *)malloc(total_number_of_shelves * sizeof(int));
    total_number_of_pages = (int **)malloc(total_number_of_shelves * sizeof(int*));
// From around 1 months i am trying this question & i always get the run time error just because minor mistake as i was using sizeof(int) instead of sizeof(int*) 

   for(int i = 0 ; i < total_number_of_shelves ; i++)
   {
       total_number_of_books[i] = 0; // set no. of books = 0
       total_number_of_pages[i] = NULL; // set pointer to array NULL
   }

   while (total_number_of_queries--)
  {
      int type_of_query;
      scanf("%d", &type_of_query);

      if (type_of_query == 1)
      {
          int x, y;
          scanf("%d %d", &x, &y);

          total_number_of_books[x]++; // increament the no. of books on shelf

         if(total_number_of_books[x] == 1) // we are going to insert the very first book in the shelf 'x' so we don't need realloc right now
              total_number_of_pages[x] = malloc(sizeof(int)); 
         else
              total_number_of_pages[x] = realloc(total_number_of_pages[x], total_number_of_books[x]*sizeof(int));
// CTM : Its mentioned that "Both the shelves and the books are numbered starting from 0." see constraints so keep that in mind  that is why i use "- 1" here total_number_of_books[x]-1 
        total_number_of_pages[x][total_number_of_books[x] - 1] = y;
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}
