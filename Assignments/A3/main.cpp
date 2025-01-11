#include <iostream>
#include <vector>
using namespace std;

void print_numbers(vector<int>& s);
void adding_numbers(vector<int>& s, int value); //add int check in parenthesis if preventing duplicates
void mean_numbers(vector<int>& s, int addition, double mean);
void small_numbers(vector<int>& s, int small);
void large_numbers(vector<int>& s, int large);
void clear_numbers(vector<int>& s, vector<int>& n);
void find_numbers(vector<int>& s, int find, int c);
void sorting_numbers(vector<int>& s, vector<int>& n, int small, int large, int indexes);
void menu(vector<int>, vector<int>);
int quit();

int main()
{

    vector <int> nums;
    vector <int> sorted;

    menu(nums, sorted);



    return 0;
}

void print_numbers(vector<int>& s)
{
    if (s.empty())
    {
        cout << "[] - the list is empty" << endl;
        cout << endl;
    }
    else
    {
        cout << "[ ";
        for (unsigned i{ 0 }; i < s.size(); ++i)
        {
            cout << s[i] << " ";
        }
        cout << "]" << endl;
        cout << endl;
        cout << endl;
    }
}

void adding_numbers(vector<int>& s, int value) //add int check in paranthesis if preventing duplicates
{
    cout << "Add a number : "; //if preventing duplicate entries is enable, put in comments this section to } before break
    cin >> value;
    cout << endl;

    if (cin.fail())
    {
        cout << "Error." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Please enter a number next time. " << endl;
        cout << endl;
    }

    else
    {
        s.push_back(value);
        cout << value << " added." << endl;
        cout << endl;
    } //end of the comment 

    //Remove the slashes with asterisks to not allow duplicate entries
/*  do{
      check =0;
      cout<<"Add a number : ";
      cin>>value;
      cout<<endl;
       if(cin.fail())
      {
            cout << "Error." <<endl;
            cin.clear();
            cin.ignore(256,'\n');
            cout<<"Please enter a number next time. "<<endl;
            cout<<endl;
      }else {
            for(unsigned i{0};i<s.size();i++)
            {
                  if(s.at(i)==value)
                  {
                      check=1;
                      cout<<"You already entered this number. Please try again next time."<<endl;
                      cout<<endl;
                  }
            }
             if(check==0) {
                      s.push_back(value);
                      cout<<value<<" added."<<endl;
                      cout<<endl;
                  }
                   }
  }while(check==1); */
}

void mean_numbers(vector<int>& s, int addition, double mean)
{
    if (s.empty())
    {
        cout << "Unable to calculate the mean - no data" << endl;
        cout << endl;
    }
    else
    {
        for (unsigned int i = 0; i < s.size(); i++)
            addition += s[i];
        mean = static_cast<double>(addition) / s.size();
        cout << "The average is " << mean << endl;
        cout << endl;
        addition = 0;
        mean = 0;
    }
    cout << endl;
}

void small_numbers(vector<int>& s, int small)
{
    if (s.empty())
    {
        cout << "Unable to identify - no data" << endl;
        cout << endl;
    }
    else
    {
        small = s[0];
        for (unsigned int i = 1; i < s.size(); i++)
            if (s[i] < small)
            {
                small = s[i];
            }
        cout << "The smallest number is: " << small << endl;

    }
    cout << endl;
}

void large_numbers(vector<int>& s, int large)
{
    if (s.empty())
    {
        cout << "Unable to identify - no data" << endl;
        cout << endl;
    }
    else
    {
        large = s[0];
        for (unsigned int i = 1; i < s.size(); i++)
            if (s[i] > large)
                large = s[i];

        cout << "The largest number is: " << large << endl;

    }
    cout << endl;
}

void clear_numbers(vector<int>& s, vector<int>& n)
{
    cout << "The list is now empty" << endl;
    s.clear();
    n.clear();
    cout << endl;
}

void find_numbers(vector<int>& s, int find, int c)
{
    cout << "Enter a number to find the number of time it occurs in the list: ";
    cin >> find;
    cout << endl;
    if (cin.fail())
    {
        cout << "Error." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Please enter a number next time. " << endl;
        cout << endl;
    }
    else
    {

        for (unsigned int i = 0; i < s.size(); i++)
        {

            if (find == s[i])
            {

                c++;

            }

        }
        cout << "The number " << find << " is repeated " << c << " times " << endl;
        c = 0;
        cout << endl;
    }
}

void sorting_numbers(vector<int>& s, vector<int>& n, int small, int large, int indexes)
{
    large = s[0];
    for (unsigned int i = 1; i < s.size(); i++)
    {
        if (s[i] > large)
            large = s[i];

    }
    cout << endl;


    if (s.empty())
    {
        cout << "[] - the list is empty" << endl;
        cout << endl;
    }
    else
    {

        for (unsigned j = 0; j < s.size(); j++)
        {
            small = large;
            for (unsigned i = 0; i < s.size(); i++)
            {
                if (s[i] < small)
                {
                    small = s[i];
                    indexes = i;
                }
            }
            n.push_back(small);
            s[indexes] = large;

        }
        cout << "[ ";
        for (unsigned z = 0; z < s.size(); z++)
        {
            cout << n[z] << " ";
            s[z] = n[z];
        }
        cout << "]" << endl;

        cout << endl;
        cout << "List sorted." << endl;
        cout << endl;
    }
}

int quit()
{
    cout << "Goodbye" << endl;
    cout << endl;
    exit(0);
}
void menu(vector<int> nums, vector<int> sorted)
{
    int value{};
    int max{};
    int min{};
    //int flag {0}; //remove slashes to enable flag where it's used to prevent duplicate entries
    int index{};
    int sum{ 0 };
    double average{ 0.0 };
    int finding_number{ 0 };
    int count{ 0 };
    char key{};

    while (true)
    {
        cout << "Menu\n\nP - Print numbers \nA - Add a number \nM - Display mean of the numbers \nS - Display the smallest number \nL - Display the largest number \nC - Clear list \nF - Repetition of a number in the list \nR - Display the list sorted \nQ - Quit" << endl;
        cout << endl;
        cout << "Select an option: ";
        cin >> key;
        cout << endl;
        switch (key)
        {
            //Print the numbers in the list (2%)
            case 'p':
            case 'P':
                print_numbers(nums);

                break;

            //Add a number to the list (2%)
            case 'a':
            case 'A':

                //Not allowing duplicate entries (1%)

                adding_numbers(nums, value); //add flag in parenthesis if preventing duplicate

                break;

            //Display the mean/average of the numbers in the list (2%)
            case 'm':
            case 'M':

                mean_numbers(nums, sum, average);
                break;

            //Display smallest number (2%)
            case 's':
            case 'S':

                small_numbers(nums, min);
                break;

            //Display largest number (2%)
            case 'l':
            case 'L':

                large_numbers(nums, max);
                break;

            //Clear the list (1%)
            case 'c':
            case 'C':

                clear_numbers(nums, sorted);
                break;

            //Display the number of times a number is repeated in the list (1%)
            case 'f':
            case 'F':

                find_numbers(nums, finding_number, count);
                break;

            //Extra functionality (1%)
            case 'r':
            case 'R':

                sorting_numbers(nums, sorted, min, max, index);
                break;

            //Quit the program
            case 'q':
            case 'Q':
                quit();

                break;
            default:
                cout << "Unknown selection, please try again." << endl;
                cout << endl;
        }
    }

}


