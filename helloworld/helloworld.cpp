// Program to count votes for candidates from different voting stations
#include <iostream>
using namespace std;

   int main()
   {
       // declaring variables
         int votesForA =0;
         int votesForB =0;
         int votesForC =0;
         int spoiltVotes =0;
         int votingStations = 4;
         int count =1;

         for ( int i = 1; i <= votingStations ; i++)
         {
             char candidate = ' ';
             cout <<"You are in voting station no: "<< count++ << endl;

             while(candidate != 'x' && count <= votingStations + 1)
             {
                 cout <<"enter the candidate you want to vote for a, b, c else press x"<< endl;
                 cin>> candidate;

                 switch(candidate)
                 {
                     case 'a':
                        votesForA++;
                        break;
                     case 'b':
                        votesForB++;
                        break;
                     case 'c':
                        votesForC++;
                        break;
                     case 'x' :
                        break;
                     default:
                        spoiltVotes++;
                 }
             }
         }
          cout<< " Total votes for A " <<  votesForA << endl;
          cout<< " Total votes for B " <<  votesForB << endl;
          cout<< " Total votes for C " <<  votesForC << endl;
          cout<< " Total spoilt votes " <<  spoiltVotes << endl;

          return 0;
   }