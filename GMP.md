https://gmplib.org/gmp-man-6.2.0.pdf


INSTALL GMP:


https://stackoverflow.com/questions/65648379/how-to-install-gnu-mp-gmp-in-codeblocks-on-linux-mint




https://unix.stackexchange.com/questions/537537/how-to-put-some-source-uris-in-your-sources-list



INSTALLATION 


wget https://gmplib.org/download/gmp/gmp-6.2.1.tar.xz 
unxz gmp-6.2.1.tar.xz 
tar xf gmp-6.2.1.tar 
cd gmp-6.2.1 
./configure 
sudo make 
sudo make install

sudo sed -i 's/# deb-src/deb-src/' /etc/apt/sources.list 
sudo apt update

sudo apt update 
sudo apt install apt-src 
sudo apt-src update 
sudo apt-src install gmp 
sudo apt-src build gmp


















USING GMP

#include <gmp.h>

g++ mycxxprog.cc -lgmpxx -lgmp
