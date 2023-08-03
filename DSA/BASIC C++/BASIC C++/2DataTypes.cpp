#include<iostream>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	   if (type == "Integer")
        return 4;
    else if (type == "Long")
        return 8;
    else if (type == "Float")
        return 4;
    else if (type == "Double")
        return 8;
    else if (type == "Character")
        return 1;
    else // 'type' should have matched with some data type above
        return -1; // Should not be returned
}
int main()
{
    string type;
    
    int ans=dataTypes(type);
    cout<<ans<<endl;
  
  return 0;
}

