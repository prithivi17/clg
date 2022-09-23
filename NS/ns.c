sudo apt-get install build-essential autoconf automake

sudo apt-get install tcl8.5-dev tk8.5-dev
 
sudo apt-get install per1 xgraph libxt-dev libx11-dev libxmu-dev

gedit ls.h (open to...nsfile,linkstate,ls.h....type to......this->)


cd /home/itlab/Documents/ns-alline-2.35
./install........ after ./validate
 
next terminal open

sudo gedit .bashrc .....path paste
source ~/.bashrc




# LD_LIBRARY_PATH
OTCL_LIB=/home/itlab/Documents/ns-allinone-2.35/otcl-1.14
NS2_LIB=/home/itlab/Documents/ns-allinone-2.35/lib
X11_LIB=/usr/X11R6/lib
USR_LOCAL_LIB=/usr/local/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OTCL_LIB:$NS2_LIB:$X11_LIB:$USR_LOCAL_LIB

# TCL_LIBRARY
TCL_LIB=/home/itlab/Documents/ns-allinone-2.35/tcl8.5.10/library
USR_LIB=/usr/lib
export TCL_LIBRARY=$TCL_LIB:$USR_LIB

# PATH
XGRAPH=/home/itlab/Documents/ns-allinone-2.35/bin:/home/itlab/Documents/ns-allinone-2.35/tcl8.5.10/unix:/home/itlab/Documents/ns-allinone-2.35/tk8.5.10/unix
NS=/home/itlab/Documents/ns-allinone-2.35/ns-2.35/
NAM=/home/itlab/Documents/ns-allinone-2.35/nam-1.15/
PATH=$PATH:$XGRAPH:$NS:$NAM





IMPORTANT NOTICES:

(1) You MUST put /home/itlab/Documents/ns-allinone-2.35/otcl-1.14, /home/itlab/Downloads/ns-allinone-2.35/lib, 
    into your LD_LIBRARY_PATH environment variable.


NAM INSTALL:
sudo apt-get install nam
sudo dpkg --install nam_1.14_amd64.deb 
 
 
