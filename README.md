# miniTS
Projektni zadatak iz predmeta Programski prevodioci.

Alati koji su korišćeni:

  - **Lex** za leksičku analizu
  - **Bison** za sintaksnu i semantičku analizu
### Pokretanje
Potrebno je pozicionirati se u `impl/minits/`, a potom pozvati komandu `make` u terminalu. Tim pozivom, dobiće se izvršna datoteka `minits`, a aktivira se komandom `./minits`

OK testovi mogu se pokrenuti pozivom sledeće komande iz istog direktorijuma:  `make test TEST="tests/ok_tests/*"`

Testovi sa greškom mogu se pokrenuti pozivom sledeće komande iz istog direktorijuma:  `make test TEST="tests/err_tests/*"`
