
for(int i = 0; i < n; i++)
{
    // spaces
    for(int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }

    char ch = 'A';

    // alphabets
    for(int j = 0; j < 2 * i + 1; j++)
    {
        cout << ch;

        if(j < i)
            ch++;
        else
            ch--;
    }

    cout << endl;
}
