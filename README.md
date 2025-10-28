Algorithme PGCD
Variables
   A, B, r : entier
Début
   Ecrire("Entrez la valeur du dividende A : ")
   Lire(A)
   Ecrire("Entrez la valeur du diviseur B : ")
   Lire(B)
   TantQue (B <> 0) faire
        r <- A mod B
        A <- B
        B <- r
   FinTantQue
   Ecrire("Le PGCD est : ", A)
Fin
