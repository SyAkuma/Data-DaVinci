# **Welcome to Week 4 of Data DaVinci**

This week, we will dive into the fascinating world of **Time Series Analysis**, a critical domain in data science for analyzing and forecasting temporal data. Time series data is ubiquitous, with applications ranging from stock price prediction to weather forecasting and energy consumption modeling.

## **Time Series Analysis**

Time series data consists of observations recorded sequentially over time. Analyzing such data involves identifying patterns like trends, seasonality, and cycles, and using these insights for forecasting future values.

### **Core Concepts**

- **Components of Time Series**:
  - **Trend**: Long-term increase or decrease in the data.
  - **Seasonality**: Repeating patterns or cycles in the data at regular intervals.
  - **Noise**: Random variations that do not follow a pattern.
  
- **Stationarity**: A time series is stationary if its statistical properties (mean, variance) remain constant over time. Stationarity is often a prerequisite for time series modeling.
  
- **Autocorrelation**: The correlation of a time series with a lagged version of itself. Autocorrelation plots (ACF) help identify dependencies between time steps.

- **Differencing**: A technique used to transform a non-stationary time series into a stationary one by subtracting the previous value from the current value.

### **Key Techniques**

- **Moving Averages**: Smoothing the time series by averaging data points within a specific window.
- **Exponential Smoothing**: Assigning exponentially decreasing weights to past observations.
- **ARIMA (AutoRegressive Integrated Moving Average)**: A powerful model for forecasting stationary time series.
- **SARIMA (Seasonal ARIMA)**: Extends ARIMA to handle seasonality in time series data.
- **LSTM (Long Short-Term Memory)**: A type of recurrent neural network (RNN) designed to learn dependencies in sequential data, including long-term patterns.

## **Assignments**

This week has 1 assignment containing 2 questions, there are a few resources in the assignment pdf for you to refer. 

Note - Ignore the Instructions of the assignments and you are not required to submit a report (as mentioned).

For all questions: plots, answers and evaluation metrics go into the report. The code part for the
that question goes into Q{ques no}{part no}.ipynb e.g. Q1a.ipynb
\
This week's content is designed to provide you with a strong foundation in time series analysis, equipping you with both traditional statistical techniques and modern deep learning approaches. Dive in and explore the temporal dimension of data!
