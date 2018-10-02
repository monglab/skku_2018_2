
input buffer : 10 bytes

Off SSP option : -fno-stack-protector
(SSP : Stack Smashing Protector)


<strcpy>
gcc -o bof1 bof1.c 
./bof1 aaaaaaaaaa
./bof1 aaaaaaaaaaa
>> SSP Error

gcc -fno-stack-protector -o bof1 bof1.c 
./bof1 aaaaaaaaaa
./bof1 aaaaaaaaaaa
>> vulnerability test



<strncpy>
gcc -o bof2 bof2.c 
./bof2 aaaaaaaaaa
./bof2 aaaaaaaaaaa

