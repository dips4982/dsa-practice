class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # set lookup and then flush the set when duplicate found
        lookup: dict[str, int] = dict()
        track = set()
        prev = 0;
        n = len(s)
        maxlen=1

        if(len(s)==0):
            return 0

        for i in range(n):
            if s[i] in track:

                maxlen = max(maxlen, len(track))
                
                idx = lookup[s[i]]
                
                for j in range(prev, idx + 1): 
                    track.discard(s[j])

                prev = idx + 1

                lookup[s[i]] = i
                track.add(s[i])
            else :
                lookup[s[i]] = i;
                track.add(s[i])
                maxlen = max(maxlen, len(track))

        return maxlen

        
        