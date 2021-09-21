main = do
    getLine >>= print . length . filter (=='1')