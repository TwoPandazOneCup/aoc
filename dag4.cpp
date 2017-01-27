#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  ifstream a;
  a.open("input.txt", ifstream::in);
  char c;
  string linje;
  string resultatstreng;
  string definisjon;
  int alf[25] = {0};
  int resultat = 0;
  int delResultat = 0;
  bool erGyldigSetning = true;
  bool definisjonStreng = false;

  while( c = a.get())
    {
      if ( c == EOF)
	break;
      if (c != '\n')
	{
	  if (c == '[')
	    definisjonStreng = true;
	  if (c == ']')
	    definisjonStreng = false;
	  if ( c >= 97 && c <= 122)
	    if(!definisjonStreng)
	      alf[c-97] += 1;
	    else
	      definisjon += c;
	      
	      
	  if ( c >= 48 && c <= 57)
	    resultatstreng += c;
	  linje += c;
	}
      else
      {

	 
	
	linje.clear();
	delResultat = stoi(resultatstreng);
	resultatstreng.clear();
	printf("%d\n", delResultat);
	if (erGyldigSetning)
	  resultat += delResultat;


	delResultat = 0;
	erGyldigSetning = false;
	break;
      }
      cout << linje <<endl;
    }
  for (int i = 0; i <= 25; ++i)
    printf("%d\t%c\n", alf[i], i+97);
  printf("%d", resultat);
  cout << definisjon <<endl;
 
}
