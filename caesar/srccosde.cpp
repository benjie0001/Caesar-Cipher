#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// function prototype
string caesar(int k, string plaintext);

int main(int argc, char* argv[])
{
    // TODO 1: declare an int to hold k as well as a string to hold the plaintext
    int k;
    string plaintext;

    // TODO 2: ensure that the right number of command line arguments are entered
    // If the wrong number are entered exit by returning 3.
    if (argc==26)
    {
        cout<<3;
    }

    // If the right number are entered assign k the appropriate value
    else
    {
        k=argc;
    }
    // Prompt user for the plaintext
    cout << "Plaintext: ";


    // TODO 3: read in the plaintext using getline
    getline(cin,plaintext);
    // TODO 4: run the function caesar with appropriate arguments and assign the value returned to a string called ciphertext

    // Print out the ciphertext
    cout << "Ciphertext: "<< caesar(k,plaintext);
}

// TODO 5: implement the caesar function
// Remember to take care of a case in which k is greater than 26
string caesar(int k, string plaintext)
{
    string result="";
    //traverse text
    for(int i=0; i<plaintext.length();i++)
    {
        //transforming each character
        //uppercase letters
        if(isupper(plaintext[i]))
        {
            result+=char(int(plaintext[i]+k-65)%26+65);
        }
        //lowercase transformation
        else
        result+=char(int(plaintext[i]+k-97)%26+97);

    }

    return result;



}
