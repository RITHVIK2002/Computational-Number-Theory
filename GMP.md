https://gmplib.org/gmp-man-6.2.0.pdf


** INSTALL GMP: **


https://stackoverflow.com/questions/65648379/how-to-install-gnu-mp-gmp-in-codeblocks-on-linux-mint




https://unix.stackexchange.com/questions/537537/how-to-put-some-source-uris-in-your-sources-list



** INSTALLATION **  


wget https://gmplib.org/download/gmp/gmp-6.2.1.tar.xz \newline
unxz gmp-6.2.1.tar.xz \newline
tar xf gmp-6.2.1.tar \newline
cd gmp-6.2.1 \newline
./configure \newline
sudo make \newline
sudo make install \newline

sudo sed -i 's/# deb-src/deb-src/' /etc/apt/sources.list \newline
sudo apt update \newline

sudo apt update \newline
sudo apt install apt-src \newline
sudo apt-src update \newline
sudo apt-src install gmp \newline
sudo apt-src build gmp \newline


















** USING GMP **

#include <gmp.h>

g++ mycxxprog.cc -lgmpxx -lgmp
