#include<iostream.h>
#include<math.h>
main()
    {
    double A, B, C, discrim, root1, root2, twoA;
    cout<<"Enter coefficients for equation A*x^2 + B*x + C\n";
    cout<<"Enter A :";
    cin>>A;
    cout<<"Enter B :";
    cin>>B;
    cout<<"Enter C :";
    cin>>C;
    if(A != 0)
    {
    twoA = 2 * A;
    discrim = B * B - 4 * A * C;
    if(discrim > 0)
    {
    root1 = (-B + sqrt(discrim)/ twoA);
    root2 = (-B - sqrt(discrim)/ twoA);
    cout<<"root1 = "<<root1<<"\n";
    cout<<"root2 = "<<root2<<"\n";
    }
    else if(discrim < 0)
    {
    discrim = -discrim;
    cout<<"root1 = ("<<-B / twoA<<") + i ("<<sqrt(discrim) / twoA<<")\n";
    cout<<"root2 = ("<<-B / twoA<<") - i ("<<sqrt(discrim) / twoA<<")\n";
    }
    else
    {
    root1 = -B / 2 / A;
    root2 = root1;
    cout<<"root1 = "<<root1<<"\n";
    cout<<"root2 = "<<root2<<"\n";
    }
    }
    else
        cout<<"root = "<<(-C / B)<<"\n";
    return 0;
    }
