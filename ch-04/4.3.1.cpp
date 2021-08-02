
//
// This is example code from Chapter 4.3.1 "Constant expressions" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//------------------------------------------------------------------------------
constexpr int max = 17; // a literal is a constant expression

void use(int n)
{
    constexpr int c1 = max + 7;
    // constexpr int c2 = n+7; // error: we don't know the value of c2
    const int c2 = n + 7; // OK: but don't try to change the value of c2
    // c2 = 7; // error: c2 is a const
}

int main()
{
    constexpr double pi = 3.14159265359;
    //pi = 7;           // error: assignment to const
    int r = 7;
    int v = 2 * pi / r; // ok: we just read pi; we don't try to change it
    int val = 19;

    int a = max + 2; // a constant expression (a const int plus a literal)
    int b = val + 2; // not a constant expression: it uses a variable

    use(7);
}

//------------------------------------------------------------------------------
