# Python
      functiontools -> partials,rduce,map,filter etc.
      
      partials-> it creates a function to call a function with few arg 
      
                def power_(x,y,z):
                return pow(x,y)*z
                dbl = partial(power_,y = 2, z=3)
                print(dbl(4))
      
      map-> it iterates over a given list, instead of using for loop
            list_name = list(map(lambda x: x*2,[]))
            lambda is keyword
      
      reduce-> Reduce is a really useful function for performing some computation on a list and returning the result.
            It applies a rolling computation to sequential pairs of values in a list.
            For example, if you wanted to compute the product of a list of integers.
            So the normal way you might go about doing this task in python is using a basic for loop:
               
               product = 1
               list = [1, 2, 3, 4]
               for num in list:
               product = product * num
               # product = 24
               Now let’s try it with reduce:
               
               from functools import reduce
               product = reduce((lambda x, y: x * y), [1, 2, 3, 4])
      re-> 
            Regular Expression:
                  .sub -> subsitute particular words in the input sentences
                  re.sub(r'[^a-zA-Z]+$',' ', line) where [charcters to be removed] ^ means not
                  r -> replace, 
                  re.sub('charcter',' ',line) it removes
