# Binary -> Decimal
binaryNum=101
ans, pows =0,1

while(binaryNum>0):
    lastDigit=binaryNum%10
    binaryNum//=10
    ans+=pows*lastDigit
    pows*=2

#  Output
print(ans)