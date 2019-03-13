#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <algorithm>
  using namespace std;

int
main () 
{
  
string genome = "ATGTGTGTGTATATTAA"; //testing this string
  cout << "Enter a Genome: ";
  
cin >> genome;
  
 
int geneCounter = 0;
  
 
 
while (!genome.empty ()) //enters loop if strings not empty
    {
      
 
 
if (genome.find ("ATG") == string::npos)	//genome.find("ATG") return npos if no ATG is found
	{
	  
if (geneCounter == 0)
	    
	    {
	      
cout << "no gene is found";
	      
genome.clear ();
	    
}
	
}
      
      else
	
	{
	  
int startGene = genome.find ("ATG");	
	  int endGene = min (min (genome.find ("TAG"), genome.find ("TAA")), genome.find ("TGA"));	//endcaps are TAG or TAA or TGA
	                                                                                            //finds location of (1+ gene end)
	  
 
string OutputGene = genome.substr (startGene + 3, endGene - (startGene + 3));	  //puts copy of gene in substring
	  
if ((OutputGene.length () % 3) == 0)
	    
	    {
	      
geneCounter += 1;
	      
cout << OutputGene << endl; //a gene is a multiple of three characters so if its a gene I cout the gene
	    
}
	  
 
endGene += 3;
	  
genome.erase (0, endGene); //its front ATG and its endcap and anything before its ATG
	                         //erase the gene
}
    
}
  
 
 
 
return 0;

}
