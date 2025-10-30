# DSA_Project2_Blaze
GitHub Repo for DSA Project Blaze

✅ Step 1: Download the dataset

You have two main ways: manually via the website, or programmatically via Kaggle’s API. Here’s how to do the API way (which is generally more reproducible):

If you haven’t already, create a Kaggle account, and in your account settings go to the “API” section and create a new API token. This will download a file called kaggle.json containing your username and key. 

Place the kaggle.json in a directory named ~/.kaggle/ (on Linux/Mac) or appropriate path on Windows. Make sure it’s secured (permissions  600 600 on Unix).

Install the Kaggle Python library:

  pip install kaggle


Identify the dataset slug. For Sentiment140 it’s kazanova/sentiment140 (user kazanova and dataset sentiment140).

Run the command (in a terminal or notebook cell):

  kaggle datasets download -d kazanova/sentiment140 --unzip

This will download and unzip the files into your current working directory. The --unzip flag auto-extracts.

After download you should see a CSV file (or multiple) that contain the tweets and labels.
