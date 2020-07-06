#include <iostream>
#include <string>
#include "scopedptr.h"
#include "scopedptr.cpp"
#include "cat.h"

#include <memory>

using namespace std;

struct Resource {
    weak_ptr<Resource> other;
};

void foo() {

//        shared_ptr<Resource> a(new Resource);
//        shared_ptr<Resource> b(new Resource);

    auto a = make_shared<Resource>();
    auto b = make_shared<Resource>();
    a->other = b;

//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;

    b->other = a;

    b->other.lock();
//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;


//    a.~shared_ptr();
//    b.~shared_ptr();

//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;

}

int main()
{
      foo();

//    int* ptr = new int(100);

//    shared_ptr<int> a = make_shared<int>(*ptr);

//    delete ptr;

//    {
//    shared_ptr<int> b = a;

//        cout << "a = " << *a << " b = " << *b << endl;

//        *b = 9;

//        cout << "a = " << *a << " b = " << *b << endl;

//        cout << "count  = " << a.use_count() << endl;

//    }

//    cout << "a = " << *a << endl;


//    cout << "count  = " << a.use_count() << endl;



//    unique_ptr<int> a(new int(5));

//    unique_ptr<int> b(new int(8));

//    b = std::move( a );  // в обычном случае не ожидаем никаких модификаций с а

//    cout << a.get() << " " << b.get() << endl;

//    if( a.get() )
//        cout << "a = " << *a << endl;
//    if( b.get() )
//        cout << "b = " << *b << endl;




//    Cat* cat = new Cat();
//    cout << cat->get_name() << endl;
//    ScopedPtr<Cat> smart_cat(new Cat());
//    cout << smart_cat->get_name() << endl;
//    delete cat;
//    int* b = new int(10);
//    ScopedPtr<int> b(new int(10));
//    cout << "b = " << *b << endl;
//    *b = 5;
//    cout << "b = " << *b << endl;

    return 0;
}
