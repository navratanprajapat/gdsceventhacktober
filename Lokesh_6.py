a=input('Enter Item Name :- ')
b=float(input('Enter Selling Price Of Item :- '))
c=float(input('Enter GST Rate(%) :- '))
cgst=b*((c/2)/100)
sgst=cgst
amount=b+cgst+sgst

print('INVOICE')
print('Item = ', a)
print('CGST at ',(c/2), '%', '=', cgst)
print('SGST at ',(c/2), '%', '=', cgst )
print('Amount To Pay = ' , amount)
