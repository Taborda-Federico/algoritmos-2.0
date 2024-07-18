-- Ejercicio 1 - Programá las siguientes funciones:
-- a) esCero :: Int -> Bool, que verifica si un entero es igual a 0.
esCero :: Int -> Bool

esCero x = x == 0

-- b) esPositivo :: Int -> Bool, que verifica si un entero es estrictamente mayor a 0.
esPositivo :: Int -> Bool
esPositivo x = x > 0
-- c ) esVocal :: Char -> Bool, que verifica si un caracter es una vocal en minúscula.
esVocal :: Char -> Bool
esVocal x = x `elem` "aeiou"
-- d) valorAbsoluto :: Int -> Int, que devuelve el valor absoluto de un entero ingresado.
valorAbsoluto :: Int -> Int
valorAbsoluto x | x >= 0 = x
                | otherwise = -x

-- Ejercicio 2 - Programá las siguientes funciones usando recursión o composición:
-- a) paratodo :: [Bool] -> Bool, que verifica que todos los elementos de una lista
-- sean True.
paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x:xs) = (x == True) && paraTodo xs


-- b) sumatoria :: [Int] -> Int, que calcula la suma de todos los elementos de una
-- lista de enteros.
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs


-- c ) productoria :: [Int] -> Int, que calcula el producto de todos los elementos de
-- la lista de enteros.
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs


-- e) Utiliza la función sumatoria para definir, promedio :: [Int] -> Int, que toma
-- una lista de números no vacia y calcula el valor promedio (truncado, usando division
-- entera).
promedio :: [Int] -> Int
promedio [] = 0
promedio (_:xs) = div (sumatoria xs) (length xs)


-- Ejercicio 3 - Programá la función pertenece :: Int -> [Int] -> Bool, que verifica si un número se
-- encuentra en una lista.
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece k (x:xs) = k == x || pertenece k xs


-- Ejercicio 4 - Programá las siguientes funciones que implementan los cuantificadores generales. Notá que
-- el segundo parámetro de cada función, es otra función!
-- a) paratodo’ :: [a] -> (a -> Bool) -> Bool, dada una lista xs de tipo [a] y un
-- predicado t :: a -> Bool, determina si todos los elementos de xs satisfacen el
-- predicado t.
paraTodo' :: [a] -> (a -> Bool) -> Bool
paraTodo' [] _ = True
paraTodo' (x:xs) f = f x && paraTodo' xs f 

-- b) existe’ :: [a] -> (a -> Bool) -> Bool, dada una lista xs de tipo [a] y un
-- predicado t :: a -> Bool, determina si algún elemento de xs satisface el predicado
-- t.
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) f = f x || existe' xs f


-- c ) sumatoria’ :: [a] -> (a -> Int) -> Int, dada una lista xs de tipo [a] y una
-- función t :: a -> Int (toma elementos de tipo a y devuelve enteros), calcula la
-- suma de los valores que resultan de la aplicación de t a los elementos de xs.
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) f = f x + sumatoria' xs f



-- Ejercicio 5 - Definí nuevamente la función paratodo, pero esta vez usando la función paratodo’ (sin
-- recursión ni analisis por casos!). 
esTrue :: Bool -> Bool
esTrue x = x == True
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paraTodo' xs esTrue


-- Ejercicio 6 - Utilizando las funciones del ejercicio 4, programa las siguientes funciones por composicíon,
-- sin usar recursion ni analisis por casos.
-- a) todosPares :: [Int] -> Bool verifica que todos los números de una lista sean
-- pares.
todosPares :: [Int] -> Bool
todosPares xs = paraTodo' xs even


-- b) hayMultiplo :: Int -> [Int] -> Bool verifica si existe algun número dentro del
-- segundo parámetro que sea múltiplo del primer parámetro.
esMultiplo :: Int -> Int -> Bool
esMultiplo a b = mod b a == 0
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n xs = existe' xs (esMultiplo n)


-- c ) sumaCuadrados :: Int -> Int, dado un ńumero no negativo n, calcula la suma de
-- los primeros n cuadrados, es decir 〈∑i : 0 ≤i < n : i2〉.
cuadrado :: Int -> Int
cuadrado k = k*k
sumaCuadrados :: Int -> Int
sumaCuadrados k = sumatoria' [0..(k-1)] cuadrado



-- d ) Programar la función existeDivisor::Int-> [Int] -> Bool, que dado en entero n
-- y una lista ls , devuelve True si y solo si, existe algún elemento en ls que divida a na.
esDivisor :: Int -> Int -> Bool
esDivisor n d = n `mod` d == 0
existeDivisor :: Int -> [Int] -> Bool


-- e) Utilizando la funcion del apartado anterior, definí la función esPrimo:: Int -> Bool,
-- que dado un entero n, devuelve True si y solo si n es primo.
esPrimo :: Int -> Bool
esPrimo n = n > 1 && not (existeDivisor n [2..(n-1)])


-- f) ¿Se te ocurre como redefinir factorial (ej. 2d ) para evitar usar recursión?
factorial' :: Int -> Int
factorial' x = product [1..x]

-- g ) Programar la función multiplicaPrimos :: [Int] -> Int que calcula el producto
-- de todos los números primos de una lista
multiplicaPrimos :: [Int] -> Int
multiplicaPrimos xs = productoria' [ x | x <- xs, esPrimo x ] id


-- h) Programar la función esFib :: Int -> Bool, que dado un entero n, devuelve True
-- si y sólo si n está en la sucesión de Fibonacci.
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)
esFib :: Int -> Bool
esFib n = pertenece n [ fib i | i <- [0.. n ]]

-- i ) Utilizando la función del apartado anterior, definí la función todosFib :: [Int] -> Bool
-- que dada una lista xs de enteros, devuelva si todos los elementos de la lista pertenecen
-- (o no) a la sucesión de Fibonacci.
todosFib :: [Int] -> Bool
todosFib xs = paraTodo' xs esFib


-- Ejercicio 8 - Programá una función que dada una lista de números xs, devuelve la lista que resulta de
-- duplicar cada valor de xs.
-- a) Definila usando recursión.
dupLista :: (Num a) => [a] -> [a]
dupLista [] = []
dupLista (x:xs) = (2*x) : dupLista xs


-- b) Definila utilizando la función map.
dupLista' :: (Num a) => [a] -> [a]
dupLista' xs = map (*2) xs


-- Ejercicio 9 - Programá una función que dada una lista de números xs, calcula una lista que tiene como
-- elementos aquellos números de xs que son primos.
-- a) Definila usando recursión.
primListas :: [Int] -> [Int]
primListas [] = []
primListas (x:xs) | esPrimo x = x : primListas xs
                  | otherwise = primListas xs


-- b) Definila utilizando la funci ́on filter.
primListas' :: [Int] -> [Int]
primListas' xs = filter esPrimo xs



-- c) Revisá tu definicián del ejercicio 6g . ¿Cómo podes mejorarla?
multiplicaPrimos' :: [Int] -> Int
multiplicaPrimos' xs = product (filter esPrimo xs)


-- Ejercicio 10 - La función primIgualesA toma un valor y una lista, y calcula el tramo inicial más largo de
-- la lista cuyos elementos son iguales a ese valor.
-- a) Programá primIgualesA por recursión.
primIgualesA :: (Eq a) => a -> [a] -> [a]
primIgualesA _ []  = []
primIgualesA k (x:xs) | k == x = x : primIgualesA x xs
                      | otherwise = []


-- b) Programá nuevamente la función utilizando takeWhile.
primIgualesA' :: (Eq a) => a -> [a] -> [a]
primIgualesA' n = takeWhile (==n)


-- b) Usá cualquier versión de primIgualesA para programar primIguales. Está permitido
-- dividir en casos, pero no usar recursián.
primIguales' :: (Eq a) => [a] -> [a]
primIguales' [] = []
primIguales' (x:xs) = primIgualesA' x (x:xs)