#define N(argo)                                                                \
  void argo(void **τ, long α, long β, void **ο, char *σ, long ρ, long δ)
typedef N((*n_t));
#define P (void)0
//#define P                                                                      \
//  printf("%2ld %2ld %10s %10s %10s\n", α, β, C->name, __FUNCTION__,            \
//         rays[(ρ + 1) * δ + 5]),                                               \
//      usleep(200000)
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
const char *rays[] = {"Fuchsia", "Olive", "Maroon", "Lime",   "Navy",  0,
                      "Blue",    "Green", "Red",    "Yellow", "Purple"};
typedef struct t_t {
  n_t *rays;
  unsigned long count;
  void ***arms;
  const char *name;
  unsigned long is_lr;
  n_t nar;
  unsigned long i;
  unsigned long fruitful;
  unsigned long trimed;
  void *data;
  void *data2;
} t_t;
#define Tab(nar, a, b) 0, 0, 0, (void *)#nar, 0, nar, 0, 0, 0, (void*)(a), (void*)(b)
#define T(nar) Tab(nar, 0, 0)
#define B(...)                                                                 \
  (void *[]) { __VA_ARGS__ }
#define C ((t_t *)&τ[-5])
#define BC ((t_t *)ο[β + 2])
#define GET_BIT(value, bit) ((value >> bit) & 1)
#define SET_BIT(value, bit) (value |= (1UL << bit))
#define CLS_BIT(value, bit) (value &= ~(1UL << bit))

#define sWord(n, s, ...)                                                       \
  N(n) {                                                                       \
    static void *rays[] = {__VA_ARGS__};                                       \
    (C->rays = (void *)rays), (C->nar = s)(τ, α, β, ο, σ, ρ, δ);               \
  }
#define aWord(n, ...) sWord(n, tab515_switch, __VA_ARGS__)
#define tWord(n, ...) sWord(n, bat515_switch, __VA_ARGS__)
// clang-format off

void ti_step(const char*name, long r, long d);
void ti_turn();
void ti_late_turn();
void ti_back();
#define ST ti_step(C->name, ρ, δ)
#define TR ti_turn()
#define TL ti_late_turn()
#define TB ti_back()
N(goTo          ) { ST, ((n_t)τ[δ * 11])(τ + δ * 11, α, β, ο, σ, ρ, δ); }
N(bro           ) { if (ρ == 3 || ρ == 2) ; else TB, goTo(τ, 0, β, ο, σ, 3, 1);
                    //                             TB, goTo(τ, 0, β, ο, σ, (ρ + 1) % 5, 1);
                  }
N(o             ) { TB,        goTo(τ, α, β, ο, σ, ρ, -δ); }
N(tab           ) { ST, TL,    goTo(ο[β], α, β + 2, ο, σ, ρ, (long)ο[β + 1]); }
N(tab515_switch ) { C->rays[(ρ + 1) * δ + 5](τ, α, β, ο, σ, ρ, δ); }
N(bat515_switch ) { ST, TR,
                    (ο[--β] = (void*)δ),
                    (ο[--β] = τ),
                    goTo(((void**)C->rays[(ρ + 1) * δ + 5]) + 5, α, β, ο, σ, ρ, 1); }
N(totin         ) { ST, TR;
                    t_t*c = (t_t*)&((void***)ο)[β + (long)C->data * 2][-5];
                    (ο[--β] = (void*)δ),
                    (ο[--β] = τ), goTo(c->arms[c->i] + 5, α, β, ο, σ, ρ, δ); }
N(nop           ) { assert(0); }
aWord(toti,         goTo, goTo, goTo, goTo, goTo, 0,
                    totin,totin,totin,totin,goTo)
int my_propeller(t_t*c) {
  long oi = c->i;
  while((c->i = (c->i + 1) % c->count) && GET_BIT(c->trimed, c->i));
  return !(oi < c->i); }
N(Yellow_Lime   ) { SET_BIT(BC->fruitful, BC->i),         goTo(τ,α,β,ο,σ,ρ,δ); }
N(Yellow_Maroon ) { if (BC->count == 1)                   goTo(τ,α,β,ο,σ,ρ,δ);
                    else if(GET_BIT(BC->fruitful, BC->i)) goTo(τ,α,β,ο,σ,my_propeller(BC)*2,δ);
                    else SET_BIT(BC->trimed, BC->i),      goTo(τ,α,β,ο,σ,my_propeller(BC)*2,δ); }
N(Yellow_Olive  ) { SET_BIT(BC->fruitful, BC->i),         goTo(τ,α,β,ο,σ,my_propeller(BC)*2+1,δ); }
N(Red_Maroon    ) {                                       goTo(τ,α,β,ο,σ,my_propeller(BC)*2,δ); }
N(Green_Lime    ) { SET_BIT(BC->fruitful, BC->i),         goTo(τ,α,β,ο,σ,ρ,δ); }
aWord(a_Yellow,   goTo, goTo,         goTo,           goTo,         goTo, 0,
                  goTo, Yellow_Lime,  Yellow_Maroon,  Yellow_Olive, goTo)
aWord(a_Red,      goTo, goTo,         goTo,           goTo,         goTo, 0,
                  goTo, goTo,         Red_Maroon,     goTo,         goTo)
aWord(a_Green,    goTo, goTo,         goTo,           goTo,         goTo, 0,
                  goTo, Green_Lime,   goTo,           goTo,         goTo)

void*tab_o[]  = { T(tab),                            T(o) };
N(toti_init_for_all) {
  goTo(τ,α,β,ο,σ,ρ,δ);
}
N(toti_init_conf_tword) {
  goTo(τ,α,β,ο,σ,ρ,δ);
}
void*toti_init_Yellow_Green[] = { T(tab), T(toti_init_for_all),    Tab(toti, 1, 0), T(o) };
void*toti_init_Purple[]       = { T(tab), T(toti_init_conf_tword), Tab(toti, 1, 0), T(o) };
tWord(toti_init,  tab_o,  tab_o,  tab_o,  tab_o,  tab_o, 0,
                  tab_o,
                  toti_init_Yellow_Green,
                  tab_o,
                  toti_init_Yellow_Green,
                  toti_init_Purple)

void*Blue[]   = { T(tab), T(toti_init),              T(o) };
void*Green[]  = { T(tab), T(toti_init),              T(o) };
void*Red[]    = { T(tab), T(toti_init),              T(o) };
void*Yellow[] = { T(tab), T(toti_init),              T(o) };
tWord(t_heart, tab_o,  tab_o,  tab_o, tab_o,   tab_o, 0,
               Blue,   Green,  Red,   Yellow,  tab_o)

N(t_closed_Yellow_Green) { (C->nar = t_heart)(τ, α, β, ο, σ, ρ, δ); }
aWord(t_closed, goTo, goTo,                  goTo, goTo,                  goTo, 0,
                goTo, t_closed_Yellow_Green, goTo, t_closed_Yellow_Green, goTo)
#define D(name, ...)                                                           \
  N(name) {                                                                    \
    void **arms[] = {__VA_ARGS__};                                             \
    C->count = sizeof(arms) / sizeof(*arms);                                   \
    C->arms = arms;                                                            \
    (C->nar = t_closed)(τ, α, β, ο, σ, ρ, δ);                                  \
  }
N(Yellow_Green_term) {
  char*s = C->data;
  long i = 0;
  while (s[i] && s[i] == σ[i]) i++;
  if (s[i] == 0) (ο[α++] = s), goTo(τ, α, β, ο, σ + i, ρ, δ);
  else                         goTo(τ, α, β, ο, σ, ρ - 1, δ);
}
N(Purple_term) { ((long*)ο)[α]++, goTo(τ, α, β, ο, σ, ρ, δ); }

// Fuchsia Olive Maroon Lime Navy 0
// Blue Green Red Yellow Purple
aWord(term, goTo, goTo,              goTo, goTo,              goTo, 0,
            goTo, Yellow_Green_term, goTo, Yellow_Green_term, Purple_term)
N(print ) {
  if (δ == 1 && ρ != 0) {
    printf("(");
    for (long i = 0; i < α; i++)
      printf("%s", (char*)ο[i]);
    (α = 0), printf(")%s\n", rays[(ρ + 1) * δ + 5]);
  }
  goTo(τ, α, β, ο, σ, ρ, δ);
}
N(n0) { if (δ == 1 && ρ < 4) ο[α++] = "0"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(n1) { if (δ == 1 && ρ < 4) ο[α++] = "1"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(n2) { if (δ == 1 && ρ < 4) ο[α++] = "2"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(n3) { if (δ == 1 && ρ < 4) ο[α++] = "3"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(n4) { if (δ == 1 && ρ < 4) ο[α++] = "4"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(n5) { if (δ == 1 && ρ < 4) ο[α++] = "5"; goTo(τ, α, β, ο, σ, ρ, δ); }
N(a) { C->data = "a"; term(τ, α, β, ο, σ, ρ, δ); }
N(aa){ C->data = "aa";term(τ, α, β, ο, σ, ρ, δ); }
N(b) { C->data = "b"; term(τ, α, β, ο, σ, ρ, δ); }
N(s) { C->data = "s"; term(τ, α, β, ο, σ, ρ, δ); }
N(ε) { C->data = "";  term(τ, α, β, ο, σ, ρ, δ); }
D(n345,
  B(T(tab), T(n3), T(o)),
  B(T(tab), T(n4), T(o)),
  B(T(tab), T(n5), T(o)))
D(n123,
  B(T(tab), T(n1), T(o)),
  B(T(tab), T(n2), T(o)),
  B(T(tab), T(n3), T(o)))
D(ab,
  B(T(tab), T(ε), T(o)),
  B(T(tab), T(a), T(o)),
  B(T(tab), T(b), T(o)),
)
D(abS,  B(T(tab), T(ab), T(ab), T(ab), T(o)))
N(s_ss) { goTo(τ, α, β, ο, "ss", ρ, δ); }
N(s_ba) { goTo(τ, α, β, ο, "ba", ρ, δ); }
N(s_aaaaaa) { goTo(τ, α, β, ο, "aaaaaa", ρ, δ); }
D(A2,B(T(tab), T(n3), T(ε), T(o)),
     B(T(tab), T(n4), T(aa),T(A2), T(o)),
     B(T(tab), T(n5), T(a), T(A2), T(o)))
D(A1,B(T(tab), T(n1), T(aa),T(A2), T(o)),
     B(T(tab), T(n2), T(a), T(A2), T(o)))
D(sS,
  B(T(tab), T(ε), T(o)),
  B(T(tab), T(s), T(sS), T(sS), T(o)),
  B(T(tab), T(s), T(sS), T(sS), T(o)),
)
D(S, B(T(tab), T(b), T(o)),
     B(T(tab), T(S), T(a), T(o)))
void ti_init();
void*bar0[] = {T(tab), T(n1), T(o)};
void*bar1[] = {T(tab), T(n3), T(o)};

tWord(cross_l,  bar0, bar0, bar0, bar0, bar0, 0,
                bar1, bar1, bar1, bar1, bar1) 

void*bar2[] = {T(tab), T(n2), T(cross_l), T(n4), T(o)};

tWord(cross,  bar2, bar2, bar2, bar2, bar2, 0,
              bar2, bar2, bar2, bar2, bar2) 
int main() {
  void **τ = 5 + (void *[]) { T(bro), T(s_ba), T(S), T(print), T(o) };
  //void **τ = 5 + (void *[]) { T(bro), T(n123),      T(n123),  T(n123),    T(print), T(o) };
  //void **τ = 5 + (void *[]) { T(bro), T(s_ss),      T(sS),    T(print),   T(o) };
  //void **τ = 5 + (void *[]) { T(bro), T(s_aaaaaa),  T(A1),    T(print),   T(o) };
  //void **τ = 5 + (void *[]) { T(bro), T(n1), T(n2), T(n3),    T(cross),   T(n3), T(n4), T(n5), T(o) };
  long  α = 0;
  void *ο[512];
  long  β = sizeof(ο) / sizeof(*ο);
  ti_init();
  goTo(τ, α, β, ο, "", 3, 1);
}
