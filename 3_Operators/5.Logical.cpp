
#include <iostream>
using namespace std;

int main()
{
    /* 
    logical And :
    
     A      B       result
    true    False   false
    false   true    false
    false   false   false
    true    true    true

    Logical Or : 
    A       B       result
    true    false   true
    false   true    true
    true    true    true
    false   false    false


 */

    bool have_nid = false;
    bool has_passport = true;
    bool has_Identity = true;
    bool is_adult = true;

    bool is_permitted = have_nid || has_passport;

    cout << "permission - " << is_permitted << "\n";

    return 0;
}