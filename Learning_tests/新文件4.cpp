#include<iostream>
#include <iomanip> //setprecision�|�Ψ쪺�禡�w
using namespace std;
 
int main()
{
    double x; //�x�s�B�I��
    int n; //�x�s�p�Ʀ��

    
        cout << "�п�J�@�B�I��: "; //���ܨϥΪ̡A���L���D�{�b�n��J�B�I��
        cin >> x; //��Jx����
        cout << "�п�J���B�I�ƿ�X���p�Ʀ��: "; //���ܨϥΪ̡A���L���D�{�b�n��J����X���p�Ʀ��
        cin >> n; //��Jn����
        cout << endl; //����
        cout << "��X���G: " << fixed  <<  setprecision(n) << x <<  endl << endl; //��X���G
    
    return 0;
}
