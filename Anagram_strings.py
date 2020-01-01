#Author - Ashutosh Mishra

# function to check if two strings are 
# anagram or not  
def check(s1, s2): 
      
    # the sorted strings are checked  
    if(sorted(s1)== sorted(s2)): 
        print("The strings are anagrams.")  
    else: 
        print("The strings aren't anagrams.")          
          
# driver code   
s1=input()
s2 =input() 
check(s1, s2) 
