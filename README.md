# clustering

A cluster of points in 2-D space is a collection of points with different coordinates (x,y) but group together in one collection. The coordinates (x,y) may represent features of an object like (weight, height). The location of the whole cluster may be represented by its Center with XC and YC coordinates given by the averages of the x-coordinates and y-coordinates of the points in that cluster. Suppose we have two clusters of points (features) in 2-D space, cluster A and cluster B; they will be separable if none of the points in A belongs to B and vice versa

## Implementation

This is a c++ object oriented implementation of clustering using mean euclidean distance, similar to k-means, but only using k=2 to demonstrate the functionality of the program. data points are random integers.

## Purpose

I developed this to further my understanding of clustering algorithms that are shipped in python scikit-learn.
