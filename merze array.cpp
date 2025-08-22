#include<iostream>
using namespace std;

class Merge
{
    private:
        int x[100], size;
    public:
        void putArray(int s);
        void getArray();
        Merge mergeArray(Merge );
};

Merge Merge::mergeArray(Merge S)
{
    Merge R;
    R.size = size + S.size;
    
    // Copy elements from first array
    for(int i=0; i<size; i++)
    {
        R.x[i] = x[i];
    }
    
    // Copy elements from second array
    for(int j=0; j<S.size; j++)
    {
        R.x[size + j] = S.x[j];
    }
    
    return R;
}

void Merge::putArray(int s)
{
    size = s;
    for(int i=0; i<size; i++)
    {
        cout << "Enter number: ";
        cin >> x[i];
    }
}

void Merge::getArray()
{
    for(int i=0; i<size; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main()
{
    Merge A, B, C;
    A.putArray(5);
    B.putArray(5);
    C = A.mergeArray(B);
    
    cout << "Merged Array: ";
    C.getArray();
    
    return 0;
}

