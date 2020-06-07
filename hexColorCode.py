'''You are given  lines of CSS code. Your task is to print all valid Hex Color Codes, in order of their occurrence from top to bottom.

CSS Code Pattern

Selector
{
	Property: Value;
}

Valid Hex Color Codes
#FFF 
#025 
#F0A1FB 

Invalid Hex Color Codes
#fffabg
#abcf
#12365erff
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
in_css= False
n=int(input())
for i in range(n):
    line=input()
    if '{' in line:
        in_css=True
    elif '}' in line:
        in_css=False
    elif in_css:
        for color in re.findall('#[0-9a-fA-F]{3,6}',line):
            print(color)
