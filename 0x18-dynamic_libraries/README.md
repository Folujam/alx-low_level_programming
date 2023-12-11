this is the DYNAMIC LIBRARY directory in c.
copy all source files to the directory and create header file with all prototypes

- make object files with: gcc -c -fPIC *.c

- put object files into 1 lib && make dynamic lib with: gcc -shared -o libdynamic.so *.o (notice -shared flag && -o to name whatever u like .so)

-verify with: nm -D liball.so (list lib functions)

-to use lib
1. For this to work, you have to add the location of your library files into the environmental variable to know where to find the functions.

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
2.Then, you can compile it by typing the following:

gcc -L . 0-main.c -l all -o example.

With Python you can import the libraries you create in C, all you have to do is import ctypes and use CDDLL just like this:

 #!/usr/bin/python3
import ctypes
spam = ctypes.CDLL(‘./liball.so’)

Then you can use your previously created functions as you want. Let’s say that you want to call a function called abs from your library, then you can call it as spam.abs
