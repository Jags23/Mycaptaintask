file=input('Enter a file name with ext :')
ind=file.find('.')
print('index number of(.)is ', ind)
ext=file[ind:]
print('Extension :',ext)
if ext=='.py':
    print('the extension is python')
elif ext=='.c':
    print('The extension is C ')
elif ext=='.cpp':
    print('The extension is C++')

else:
    print('Unkonwn Data!')


#This program finds the extension of files like python,C and C++ else it returns a 'Unkown Data!' mesaage
