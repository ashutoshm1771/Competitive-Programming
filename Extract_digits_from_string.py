# Author : Ashutosh Mishra

test_string = 'h3el5lo9'
  
  
print("The original string : " + test_string) 
  
 
res = ''.join(filter(lambda i: i.isdigit(), test_string)) 
      

print("The digits string is : " + str(res))
