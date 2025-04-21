class TrieNode:
    def __init__(self):
        self.children = {}
        self.word_count = 0
        pass
class Trie:
    def __init__(self):
        self.root = TrieNode()
        pass    
    """вставка"""
    def insert(self, word):
        node = self.root
        for ch in word:
            if ch not in node.children:
                node.children[ch] = TrieNode()
            node = node.children[ch]
            node.word_count += 1
    """подсчет слов"""        
    def count_words(self, prefix):
        node = self.root
        for ch in prefix:
            if ch not in node.children:
                return 0  
            node = node.children[ch]
        return node.word_count        
    
trie = Trie()
words = ["hello","world","heaven","heavy"]
for a in words:
    trie.insert(a)
print("Слов начинающихся с wo:",trie.count_words("wo"))
print("Слов начинающихся с he:",trie.count_words("he"))  