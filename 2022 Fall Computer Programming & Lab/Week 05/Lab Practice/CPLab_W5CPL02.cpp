#include <iostream>

using namespace std;

int main(void)
{
    bool ans = true;
	int N, T;	
	cin >> N >> T;
	
	char *name, *typed;

	int i = 0, j = 0;

    bool check = true;
    name = new char[N];
    typed = new char[T];

    cin >> name;
    cin >> typed;

	while(i < N && j < T)
    {
        if(name[0] != typed[0])
        {
            check = false;
            break;
        }

        if(name[N - 1] != typed[T - 1])
        {
            check = false;
            break;
        }

        if(name[i] == typed[j])
        {
            i++;
            j++;
        }
        else
        {
            if(typed[j] == typed[j - 1])
            {
                j++;
                continue;
            }
            else
            {
                check = false;
                break;
            }
        }
        
	}

	if(check == true)
    {
		ans = true;
	}
    else
    {
        ans = false;
    }
                
	cout << boolalpha << ans << endl;
	return 0;
}
