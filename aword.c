#include "aword.h"
void ti_move(Args, N((*nar)));
void ti_turn_left(Args, N((*nar)));
N(m) {
  τ = τ + 11 * ι;
  ti_move(ο, τ, α, ρ, ι, τ[0]);
}
N(mb) {
  τ = τ[5], τ[-5] = (void *)ι, ρ = 3, ι = 1;
  m(ο, τ, α, ρ, ι);
}
N(mc) { m(ο, τ[5], α, ρ == 3 ? 1 : ρ, (long)τ[-5]); }
N(b) { m(ο, τ, α, ρ, -ι); }
N(o) { b(ο, τ, α, ρ == 3 ? 1 : ρ == 1 ? 3 : ρ, ι); }

N(cb) {
  if (ρ == 1)
    b(ο, τ, α, ρ, ι);
  else
    ti_turn_left(ο, τ, α, ρ, ι, mc);
}
N(A) { m(ο, τ, α, ρ, ι); }
N(B) { m(ο, τ, α, ρ, ι); }
N(toti_pith) {
  if (ρ == 1 && ι == 1)
    ti_turn_left(ο, τ, α, ρ, ι, mb);
  else
    m(ο, τ, α, ρ, ι);
}
N(and);
N(go_Red);
N(toti) {
  void *tot[] = {Ta(cb, τ), T(A), T(B), T(A), T(and), T(B), T(A), T(B), T(o)};
  *τ = toti_pith;
  τ[5] = tot + 5;
  toti_pith(ο, τ, α, ρ, ι);
}
void ti_init();
N(M) { m(ο, τ, α, ρ, ι); }
int main() {
  ti_init();
  void *ο[1024];
  long α = 0;
  void *text[] = {T(b), T(m), T(o)};
  m(ο, text + 5, α, 3, 1);
}
