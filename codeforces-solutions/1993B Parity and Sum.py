////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Wednesday
// Date_of_submission  :- 2024-08-07
// Time_of_submission  :- 14:54:28
// Time_taken          :- 218 ms
// Memory_consumed     :- 25907200 KB
// Testcase_passed     :- 15
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    s = -1
    v = []
    for x in a:
        if x%2 == 0:
            v.append(x)
        elif x > s:
            s = x
    v.sort()

    if s == -1 or v == []:
        print(0)
        continue
    
    ans = len(v)
    for t in v:
        if t < s:
            s += t
        else:
            ans += 1
            break

    print(ans)


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !