#define N(args)                                                                \
  void args(long α, long β, struct text_t *ω, struct text_t *ο, long ρ,        \
            long δ, long σ)
#define T(aw) {.q = 0}, {{aw}}, {.t = 0}, {.q = 0}, {{t}}, {.cs = #aw},
#define B(...) DB()(__VA_ARGS__)
#define D(...) DB(__VA_ARGS__)()
#define D_(...) {.t = (text_t[]){T(goto_home) __VA_ARGS__ T(o)}},
#define DB(...) {.t = (text_t[]){T(goto_home) __VA_ARGS__ T(o)}}, {{bark}}, D_
#define X ω[3 * δ].c(α, β, ω + 3 * δ, ο, ρ, δ, σ)
typedef struct text_t {
  union {
    void *v;
    long q;
    const char *cs;
    struct text_t *t;
    N((*c));
  };
} text_t;
void gut_rotate(long δ);
#include <stdio.h>
#include "aw.h"
N(goto_home) { δ = ο[σ++].q, gut_rotate(δ), ω = ο[σ++].t, X; }
N(bark) {
  ο[--σ].t = ω, ο[--σ].q = δ, gut_rotate(-δ), ω = ω[δ].t + 1, δ = 1, X;
}
N(b) { ρ = (ρ + 1) % 4, δ = 1, X; }
N(o) { δ = -1, X; }
int gut_close_requested();
void gut_line_to(long, long, const char *);
N(t) {
  if (gut_close_requested())
    return;
  gut_line_to(ρ, δ, ω[1].cs), X;
}
N(p) {
  if (δ > 0)
    X;
  else if (ρ < 3)
    ρ++, δ = 1, X;
  else
    ρ = ω[-1].q++ % 4, X;
}
void gut_clear();
void gut_init(long fps);
N(mamam) {
  if (δ == 1 && ρ == 3)
    ο[β++].cs = "მამამ";
  X;
}
N(shvils) {
  if (δ == 1 && ρ == 3)
    ο[β++].cs = "შვილს";
  X;
}
N(aushena) {
  if (δ == -1 && ρ == 3) {
    const char *s = ο[--α].cs;
    const char *op = ο[--β].cs;
    const char *os = ο[--β].cs;
    printf("%s %s %s აუშენა\n", s, op, os);
  }
  X;
}
N(sakhli) {
  if (δ == 1 && ρ == 3)
    ο[α++].cs = "სახლი";
  X;
}
AW(da)(
  Blue___(X)
  Green__(X)
  Yellow_(X)
  Red____(X)
  _Maroon(X)
  __Olive(X)
  ___Lime(X)
  ___Navy(X)
)
N(dedam) { X; }
N(gamoackho) { X; }
N(gemrieli) { X; }
N(namckhvari) { X; }
int main(int argc, char **argv) {
  // clang-format off
  text_t*ω = 1 + (text_t[]) {
    T(b)T(mamam)T(shvils)T(aushena)T(sakhli)
        T(da)
        T(dedam)T(gamoackho)T(gemrieli)T(namckhvari)T(o)
  };
  // clang-format on
  text_t ο[170 * 3];
  long α = 0, β = 170, ρ = 3, δ = 1, σ = 340;
  gut_init(5), X, gut_clear();
  return 0;
}
