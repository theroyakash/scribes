class Job {
public:
    int timestamp; int jobID; vector<int> requests;
};

int main() {
    vector<Job> jobs;
    std::sort(jobs.begin(), jobs.end(), [](const auto &a, const auto &b) {
        return a.timestamp < b.timestamp; // sort according to timestamp
    });
}