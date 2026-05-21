# Inner loop will run for columns.
            for j in range(i+1):
                print("*", end="")
                
            """ As soon as n stars are printed, move
            to the next row and give a line break."""
            print()


        # Outer loop will run for rows.
        for i in range(n):
class Solution:
    
    # Function to print pattern2
    def pattern2(self, n):