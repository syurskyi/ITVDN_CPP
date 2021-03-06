#include "mammal.h"
#include <string>


class Animal
{
public:
    virtual ~Animal() = default;
};

class Domestic: public virtual Animal
{
public:
    std::string get_name() {return name;}
private:
    std::string name = "my_dom";
};

class Pedigreed : public virtual Animal
{
public:
    std::string get_history();
private:
    std::string history;
};

class Cat : public Domestic
          , public Pedigreed
{
public:
    Cat();
    Cat(uint paws);
    uint get_paws();

    void say();

public:
    static void set_vibr(uint _vibr){ vibr = _vibr; }

    inline static uint get_vibr() { return vibr; }

private:
    static uint vibr;
    int eyes;
};
