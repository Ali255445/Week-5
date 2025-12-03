# Week-5
Denne kode kan kryptere og dekryptere tekst uden mellemrum og kun med store bogstaver.
Den kan enten gøre det med CEASAR stilen som er at tage hvert bogstav og gå 3 bogstaver frem eller tilbage, afhængigt om man vil dekryptere eller kryptere.
Så er der VIGENERE denne stil bruge et KEYWORD som er det nr bogstav som du skal gå frem på din ciphertekst. Hvis keyword er det 5. bogstav skal du 5 bogstaver frem fre dit cipherbogstav. Så printer den din krypterede eller dekrypterede tekst til sidst.



[START]

      |
      v
[Har brugeren skrevet præcis 2 argumenter?]
      |
   nej --> [Vis "Usage / hvordan man bruger programmet"] --> [STOP]
      |
     ja
      v
[Læs mode (e eller d)]
[Læs algoritme (c eller v)]

      |
      v
[Er mode gyldigt? (e = encrypt, d = decrypt)
 OG er algoritme gyldig? (c = caesar, v = vigenere)]
      |
   nej --> [Vis fejlbesked] --> [STOP]
      |
     ja
      v
[Bede brugeren skrive en tekst]
[Læs tekst]

      |
      v
[Er algoritmen Vigenère?]
      |
   nej --> (spring key over)
      |
     ja
      v
[Bede brugeren skrive en nøgle (key)]
[Læs key]

      |
      v
[Start med første bogstav i teksten]
      |
      v
[Er det en bogstav mellem A og Z?]
      |
    nej → [Gå til næste tegn]
      |
     ja
      v

----- CAESAR -----
[Hvis algoritme = Caesar]
   |
   v
   [Hvis mode = encrypt → flyt bogstav 3 frem]
   [Hvis mode = decrypt → flyt bogstav 3 tilbage]
   [Gå videre til næste bogstav]

----- VIGENÈRE -----
[Hvis algoritme = Vigenère]
   |
   v
   [Kald vigenere_encrypt eller vigenere_decrypt]
   [Erstat tekst med resultat]
   [Stop loopet]

      |
      v
[Er der flere bogstaver?]
      |
    ja → [Fortsæt]
      |
    nej
      v

[Vis den færdige tekst]

[STOP]
