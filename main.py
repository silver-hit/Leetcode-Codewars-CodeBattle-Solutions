class Solution:
    def isHappy(self, n: int) -> bool:
        result = 0
        integer = n
        is_happy = False
        loop_counter = 0
        while integer != 1 and loop_counter < 50:
            length = len(str(integer))
            for num in str(integer):
                result = (int(num)**2) + result
            integer = result
            result = 0
            loop_counter = loop_counter + 1
        
        if integer == 1:
            is_happy = True
        else:
            is_happy = False 
        
        return is_happy
        

        