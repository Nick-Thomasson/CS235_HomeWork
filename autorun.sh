#! /bin/bash
clear
RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[0;33m'; 
BLUE='\033[0;34m'; MAGENTA='\033[0;35m'; CYAN='\033[0;36m';
CLR='\033[0m'

# ---------------------------------------------------------------------------- #

labname="u06_Pointers"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u06_Pointers/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u07_StandardTemplateLibrary"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u07_StandardTemplateLibrary/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u08_Recursion"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u08_Recursion/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u11_Templates_Exceptions"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u11_Templates_Exceptions/graded_program
pwd
g++ *.cpp *.h Models/*.cpp Models/*.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u13_Polymorphism"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u13_Polymorphism/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u15_Overloading_DefaultParams"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u15_Overloading_DefaultParams/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u17_Static_Friends"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u17_Static_Friends/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u18_AnonymousFunctions"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u18_AnonymousFunctions/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

# ---------------------------------------------------------------------------- #

labname="u19_OverloadOperators"
echo -e "${CLR}################################################################################"
echo -e "- ${labname} -"
cd u19_OverloadOperators/graded_program
pwd
g++ *.cpp *.h
./a.out test
cd ../..

echo -e "${CLR} Done."
