fun :: [Int]->Int->[Int]
fun []  n = []
fun (p:ps) n | (n<p) = p:fun ps n
            |otherwise = n : p : fun ps n