#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> nums;
    vector <int> sorted;

    char key{};
    int value{};
    int max;
    int min;
    //int flag {0}; //remove slashes to enable flag where it's used to prevent duplicate entries
    int index{};
    int sum{ 0 };
    double average{ 0.0 };
    int finding_number{ 0 };
    int count{ 0 };



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

                if (nums.empty())
                {
                    cout << "[] - the list is empty" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "[ ";
                    for (unsigned i{ 0 }; i < nums.size(); ++i)
                        cout << nums[i] << " ";
                    cout << "]" << endl;
                    cout << endl;
                    cout << endl;
                }
                break;

            //Add a number to the list (2%)
            case 'a':
            case 'A':

                //Not allowing duplicate entries (1%)
                                //Remove the slashes with asterisks to not allow duplicate entries
                          /*  do{
                                flag =0;
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
                                      for(unsigned i{0};i<nums.size();i++)
                                      {
                                            if(nums.at(i)==value)
                                            {
                                                flag=1;
                                                cout<<"You already entered this number. Please try again next time."<<endl;
                                                cout<<endl;
                                            }
                                      }
                                       if(flag==0) {
                                                nums.push_back(value);
                                                cout<<value<<" added."<<endl;
                                                cout<<endl;
                                            }
                                             }
                            }while(flag==1); */

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
                    nums.push_back(value);
                    cout << value << " added." << endl;
                    cout << endl;
                } //end of the comment 
                break;

            //Display the mean/average of the numbers in the list (2%)
            case 'm':
            case 'M':

                if (nums.empty())
                {
                    cout << "Unable to calculate the mean - no data" << endl;
                    cout << endl;
                }
                else
                {
                    for (unsigned int i = 0; i < nums.size(); i++)
                        sum += nums[i];
                    average = static_cast<double>(sum) / nums.size();
                    cout << "The average is " << average << endl;
                    cout << endl;
                    sum = 0;
                    average = 0;
                }
                cout << endl;
                break;

            //Display smallest number (2%)
            case 's':
            case 'S':
                if (nums.empty())
                {
                    cout << "Unable to identify - no data" << endl;
                    cout << endl;
                }
                else
                {
                    min = nums[0];
                    for (unsigned int i = 1; i < nums.size(); i++)
                        if (nums[i] < min)
                        {
                            min = nums[i];
                        }
                    cout << "The smallest number is: " << min << endl;

                }
                cout << endl;
                break;

            //Display largest number (2%)
            case 'l':
            case 'L':
                if (nums.empty())
                {
                    cout << "Unable to identify - no data" << endl;
                    cout << endl;
                }
                else
                {
                    max = nums[0];
                    for (unsigned int i = 1; i < nums.size(); i++)
                        if (nums[i] > max)
                            max = nums[i];

                    cout << "The largest number is: " << max << endl;

                }
                cout << endl;
                break;

            //Clear the list (1%)
            case 'c':
            case 'C':
                cout << "The list is now empty" << endl;
                nums.clear();
                sorted.clear();
                cout << endl;
                break;

            //Display the number of times a number is repeated in the list (1%)
            case 'f':
            case 'F':
                cout << "Enter a number to find the number of time it occurs in the list: ";
                cin >> finding_number;
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

                    for (unsigned int i = 0; i < nums.size(); i++)
                    {

                        if (finding_number == nums[i])
                        {

                            count++;

                        }

                    }
                    cout << "The number " << finding_number << " is repeated " << count << " times " << endl;
                    count = 0;
                    cout << endl;
                }
                break;

            //Extra functionality (1%)
            case 'r':
            case 'R':
                max = nums[0];
                for (unsigned int i = 1; i < nums.size(); i++)
                {
                    if (nums[i] > max)
                    {
                        max = nums[i];
                    }
                }
                cout << endl;


                if (nums.empty())
                {
                    cout << "[] - the list is empty" << endl;
                    cout << endl;
                }
                else
                {

                    for (unsigned j = 0; j < nums.size(); j++)
                    {
                        min = max;
                        for (unsigned i = 0; i < nums.size(); i++)
                        {
                            if (nums[i] < min)
                            {
                                min = nums[i];
                                index = i;
                            }
                        }
                        sorted.push_back(min);
                        nums[index] = max;

                    }
                    cout << "[ ";
                    for (unsigned z = 0; z < nums.size(); z++)
                    {
                        cout << sorted[z] << " ";
                        nums[z] = sorted[z];
                    }
                    cout << "]" << endl;

                    cout << endl;
                    cout << "List sorted." << endl;
                    cout << endl;
                }
                break;

            //Quit the program
            case 'q':
            case 'Q':
                cout << "Goodbye" << endl;
                cout << endl;
                return 0;
                break;
            default:
                cout << "Unknown selection, please try again." << endl;
                cout << endl;
        }
    }

    return 0;
}
