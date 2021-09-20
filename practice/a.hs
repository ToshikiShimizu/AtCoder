main = do
    a <- readLn :: IO Integer
    [b, c] <- map read . words <$> getLine
    s <- getLine :: IO String
    putStrLn $ unwords [show (a + b + c), s]