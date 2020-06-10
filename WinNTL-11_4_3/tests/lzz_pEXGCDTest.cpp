#include <NTL/lzz_pXFactoring.h>
#include <NTL/lzz_pEX.h>

NTL_CLIENT


void test(zz_pX &P, zz_pEX &f, zz_pEX &g, zz_pEX &h, zz_pEX &hx, zz_pEX &s, zz_pEX &t) {
    /* P is the polynomial of the extension
     * f and g the polynomials
     * h the gcd
     * hx the gcd obtained using XGCD
     * s, t are Bezout coefficients hx=f*s+g*t
     */
    zz_pEX htest, rf, rg;

    if (h != hx) {
        cout << P << "\n" << f << "\n" << g << "\n";
        Error("different gcd:\n");
    }

    if (max(deg(f), deg(g)) > 0 || min(deg(f), deg(g)) >= 0) {
        if (deg(s) >= deg(g) || deg(t) >= deg(f)) {
            cout << P << "\n" << f << "\n" << g << "\n";
            Error("degree bounds at fault:\n");
        }
    }


    mul(s, s, f);
    mul(t, t, g);
    add(htest, t, s);
    if (h != htest) {
        cout << P << "\n" << f << "\n" << g << "\n";
        Error("xgcd at fault:\n");
    }
    if (!IsZero(h)) {
        rem(rf, f, h);
        rem(rg, f, h);
        if ((!IsZero(rf)) || (!IsZero(rg))) {
            cout << P << "\n" << f << "\n" << g << "\n";
            Error("not a common divisor\n");
        }
    } else {
        if (!IsZero(f) && !IsZero(g)) {
            cout << "debug:\n";
            cout << P << "\n" << f << "\n" << g << "\n" << h << "\n";
            Error("ooops:\n");
        }
    }
}


int main() {

    long prime = 17;

    zz_p::init(prime);

    zz_pX P;

    BuildIrred(P, 5);

    zz_pE::init(P);

    for (long i = 0; i < 400; i++) {
        if (i % 10 == 0) cerr << ".";
        zz_pEX f, g, h, s, t, hx;

        long deg_h;
        if (RandomBnd(2))
            deg_h = RandomBnd(10) + 1;
        else
            deg_h = RandomBnd(500) + 1;

        random(h, deg_h);
        SetCoeff(h, deg_h);

        long deg_f;
        if (RandomBnd(2))
            deg_f = RandomBnd(10) + 1;
        else
            deg_f = RandomBnd(1000) + 1;

        random(f, deg_f);
        f *= h;

        long deg_g;
        if (RandomBnd(2))
            deg_g = RandomBnd(10) + 1;
        else
            deg_g = RandomBnd(1000) + 1;

        random(g, deg_g);
        g *= h;

        h = 0;

        GCD(h, f, g);
        XGCD(hx, s, t, f, g);
        test(P, f, g, h, hx, s, t);
    }

    cerr << "\n";

}
