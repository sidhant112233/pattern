#include<iostrean>
#include<string.h>
using namespace std;

class Show
{
	public :
	int x;
	cout<<"x"<<this->x<<endl;
};
class get
{
	public :
	int y;
    cout<<"y"<<this->y<<endl;
};
class set
{
    public :
	int a;
    cout<<"a"<<this->a<<endl;
   		
};
class ran
{
	public :
	int k;
    cout<<"k"<<this->k<<endl;
};
class Wet :public show,public get,public set,public ran
{
    public :
	int o;
    cout<<"o"<<this->o<<endl;		
};
int main()
{
	Wet w;
	w.x();
	w.y(10);
	w.a(5,53);
	w.k(5,53,22);
	w.o(5,53,22,18);
	
	return 0;
}


