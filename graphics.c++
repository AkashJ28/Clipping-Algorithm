/*

Install Qt

OPEN TERMINAL

STEP 1............sudo apt-get update

STEP 2............sudo apt-get install build-essential


STEP 3............sudo apt-get install qtcreator


STEP 4............sudo apt-get install qt5-default


STEP 5............sudo apt-get update


STEP 4............sudo apt-get install libesd0-dev        (For ubuntu 16.04 use this command)


For ubuntu 18.04


Execute this cmd-

sudo nano /etc/apt/sources.list


Paste below line of text on new line at end of current sources list.


deb http://us.archive.ubuntu.com/ubuntu/ xenial main universe

deb-src http://us.archive.ubuntu.com/ubuntu/ xenial main universe


Save and close sources.


Run.................. sudo apt-get update.



Then install packages using:

Run..........................sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-2.0 \guile-2.0-dev libsdl1.2debian libart-2.0-dev libaudiofile-dev \libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev \libxext-dev x11proto-xext-dev libfreetype6libaa1 libaa1-dev \libslang2-dev libasound2 libasound2-dev



UNZIP THE GIVEN FILE ..........................(libgraph-1.0.2.zip)



Give the directory of the unzipped folder

cd libgraph-1.0.2



Then execute the


1        ./configure --disable-guile

2        sudo make

3        sudo make install


PROGRAM FOR TESTING


#include <graphics.h>

int main()

{

   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

   initgraph(&gd,&gm,NULL);

   rectangle(left, top, right, bottom);

   circle(x, y, radius);

   bar(left + 300, top, right + 300, bottom);

   line(left - 10, top + 150, left + 410, top + 150);

   ellipse(x, y + 200, 0, 360, 100, 50);

   outtextxy(left + 100, top + 325, "C Graphics Program");


   delay(5000);

   closegraph();

   return 0;

}











*/